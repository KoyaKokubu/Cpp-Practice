min_biggest = INT_MAX;
min_len = 0;
for (i = 0; i < M; i++){
    pointer[i] = 0;
    if (m_list[i][-1] < min_biggest) {
        min_biggest = m_list[i][-1];
        min_len = len(m_list[i]);
    }
}

shortest_range_list = [];
shortest_range = INT_MAX;
while (1) {
    min_index = -1;
    min = INT_MAX;
    max = INT_MIN;
    current_list = []

    for (i = 0; i < M; i++) {
        if (pointer[i] == min_len) {
            return shortest_range_list;
        }
        if (pointer[i] < min_len && m_list[i][pointer[i]] < min) {
            min_index = i; // update the index of the list
            min = m_list[i][pointer[i]];
        }
        if (pointer[i] < min_len && m_list[i][pointer[i]] > max) {
            max = m_list[i][pointer[i]];
        }
        current_list.append(m_list[i][pointer[i]]);
    }

    if ((max - min) < shortest_range) {
        shortest_range_list = current_list;
        shortest_range = max - min;
    }
    pointer[min_index]++;
}

// ################################################################
// heap with hash
void hash(list, a) {
    int n = len(list)-1
    list.append(a)

    while (n>0){
        int i = (n-1)/2
        if (list[n]<list[i]) {
            d[list[n]].remove(n);
            d[list[i]].remove(i);
            swap(list[n],list[i]);
            d[list[i]]=i;
            d[list[n]]=n;
        }
        n = i
    }
}
