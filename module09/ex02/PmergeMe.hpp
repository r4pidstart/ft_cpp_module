/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:58:03 by tjo               #+#    #+#             */
/*   Updated: 2023/03/21 18:01:25 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<class T>
void insertion_sorting(int s, int e, T& container)
{
    // pick one element
    for(int i=s+1; i<=e; i++)
    {
        int target=container[i];
        // and insert to proper idx
        int idx;
        for(idx=i-1; idx>=s and container[idx]>target; idx--)
            container[idx+1]=container[idx];
        container[idx+1]=target;
    }
}

template<class T>
void merge_sorting(int s, int e, T& container, int part_siz)
{
    if(e-s <= part_siz)
        insertion_sorting(s, e, container);
    else
    {
        // dividing
        int mid=(s+e)/2;
        merge_sorting(s, mid, container, part_siz);
        merge_sorting(mid+1, e, container, part_siz);

        T cpy1=T(container.begin()+s, container.begin()+mid+1);
        T cpy2=T(container.begin()+mid+1, container.begin()+e+1);
        int idx1=0, idx2=0, idx=s;
        
        // merging
        for(int i=0; i<e-s+1; i++)
        {
            if((size_t)idx1 == cpy1.size())
                container[idx++]=cpy2[idx2++];
            else if((size_t)idx2 == cpy2.size())
                container[idx++]=cpy1[idx1++];
            else if(cpy1[idx1] < cpy2[idx2])
                container[idx++]=cpy1[idx1++];
            else
                container[idx++]=cpy2[idx2++];
        }
    }
}

template <class T>
double merge_insertion_sort(T& container)
{
    struct timespec start, end;

    clock_gettime(CLOCK_MONOTONIC, &start);

    //////
    int partition_size=std::sqrt(container.size());
    merge_sorting(0, container.size()-1, container, partition_size);
    /////

    clock_gettime(CLOCK_MONOTONIC, &end);
    return ((end.tv_nsec-start.tv_nsec) + (end.tv_sec-start.tv_sec)*1e9)/1e3;
}