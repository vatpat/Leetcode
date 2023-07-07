#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void reorderList(ListNode* head) {
    vector<ListNode*> values;
    ListNode* current = head;
    while(current != nullptr) {
        values.push_back(current);
        current = current->next;
    }

    for(int i = 0; i < values.size() / 2; i++) {
        int corresponding = values.size() - 1 - i;
        values[i]->next = values[corresponding];
        values[corresponding]->next = values[i+1];
    } 
    values[values.size() / 2]->next = nullptr;

    return;
}


int main() {
    ListNode* fourth = new ListNode(4);
    ListNode* third = new ListNode(3, fourth);
    ListNode* second = new ListNode(2, third);
    ListNode* first = new ListNode(1, second);
    reorderList(first);
}