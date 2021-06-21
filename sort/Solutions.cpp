#include "DoublyLinkedList.hpp"
#include <string>

namespace solutions
{
    /* Bubblesort */
    template <typename Comparable, typename Comparator>
    void bubbleSort(DoublyLinkedList<Comparable> &a_list, const Comparator &comp)
    {
        bool has_swapped = true;
        int index = 0;
        int size = a_list.getSize();

        while (index < size)
        {
            has_swapped = false;

            for (int i = 1; i < size - index; i++)
            {
                Comparable first = a_list.getAtPos(i)->getItem();
                Comparable second = a_list.getAtPos(i + 1)->getItem();

                if (comp(second, first)) {
                    a_list.swap(i+1, i);
                    has_swapped = true;
                }
            }

            if (!has_swapped) break;

            index++;
        }
    }

    /* Insertionsort */
    template <typename Comparable, typename Comparator>
    void insertionSort(DoublyLinkedList<Comparable> &a_list, const Comparator &comp)
    {
        int size = a_list.getSize();

        //DoublyLinkedList is not 0 indexed
        for (int i = 2; i <= size; i++)
        {
            int unsorted = i;

            while (unsorted > 1 && comp(
                    a_list.getAtPos(unsorted)->getItem(),
                    a_list.getAtPos(unsorted - 1)->getItem()))
            {
                a_list.swap(unsorted - 1, unsorted);
                unsorted--;
            }
        }
    }

    /* Merge */
    template <typename Comparable, typename Comparator>
    void merge(DoublyLinkedList<Comparable> &a_list, int left_index, int middle_index, int right_index, const Comparator &comp)
    {
        int left_index_second = middle_index + 1;

        while (left_index <= middle_index && left_index_second <= right_index)
        {
            if (!comp(a_list.getAtPos(left_index_second)->getItem(), a_list.getAtPos(left_index)->getItem()))
            {
                left_index++;
            }
            else {
                int current = left_index_second;

                while (current != left_index) {
                    a_list.swap(current - 1, current);
                    current--;
                }

                left_index++;
                middle_index++;
                left_index_second++;
            }
        }

    }
    /* Mergesort */
    template <typename Comparable, typename Comparator>
    void mergeSort(DoublyLinkedList<Comparable> &a_list, int left_index, int right_index, const Comparator &comp)
    {
        if (left_index < right_index)
        {
            int middle_index = left_index + (right_index - left_index) / 2;

            mergeSort(a_list, left_index, middle_index, comp);
            mergeSort(a_list, middle_index + 1, right_index, comp);
            merge(a_list, left_index, middle_index, right_index, comp);
        }
    }

    /* Mergesort Wrapper */
    template <typename Comparable, typename Comparator>
    void mergeSort(DoublyLinkedList<Comparable> &a_list, const Comparator &comp)
    {
        int left_index = 1;
        int right_index = a_list.getSize();

        mergeSort(a_list, left_index, right_index, comp);
    }

}; // namespace solutions

/* DO NOT USE THESE: 
    * Shellsort *
    template <typename Comparable, typename Comparator>
    void shellSort(DoublyLinkedList<Comparable> &a_list, const Comparator &comp)
    {
    }
    * Quicksort *
    template <typename Comparable, typename Comparator>
    void quicksort(DoublyLinkedList<Comparable> &a_list, int left_index, int right_index, const Comparator &comp)
    {
    }
    * Quicksort Wrapper *
    template <typename Comparable, typename Comparator>
    void quickSort(DoublyLinkedList<Comparable> &a_list, const Comparator &comp)
    {
    }
*/