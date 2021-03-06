#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

/*
* l1 자체가 초기화 되지않았기 때문에 함수 내부에서 직접 호출 불가능함
* 따라서 포인터a를 사용하여 주소값을 호출하여 사용하는 것이 적합
* 호출방법은 *(a)를 사용
*/

struct ListNode
{
    int val;
    struct ListNode* next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* ll1 = l1;
    struct ListNode* ll2 = l2;
    struct ListNode* head = NULL;// 헤더
    struct ListNode** now = &head;  // 찾아다니면서 볼 노드
    int val1, val2, carry = 0, sum;
    while (ll1 || ll2) {
        val1 = ll1 ? ll1->val : 0;  // 현재 보고있는값이 잇을경우 값 가져옴
        val2 = ll2 ? ll2->val : 0;  // 현재 보고있는값이 잇을경우 값 가져옴
        sum = val1 + val2 + carry;
        *now = malloc(sizeof(struct ListNode));
        (*now)->val = sum % 10; // 현재 값
        (*now)->next = NULL;
        carry = sum / 10;
        now = &((*now)->next);
        ll1 = ll1 ? ll1->next : NULL;
        ll2 = ll2 ? ll2->next : NULL;
    }
    if (carry) {
        *now = malloc(sizeof(struct ListNode));
        (*now)->val = carry;
        (*now)->next = NULL;
    }
    return head;
}