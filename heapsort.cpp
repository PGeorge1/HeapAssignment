template <typename T, typename TPred>
void heapsort(T& a, size_t size, TPred pred)
{
    buildHeap(a, size, pred);

    for (size_t i = size - 1; i >= 1; i--)
    {
        swap(a, i, 0);
        size--;
        heapify(a, size, 0, pred);
    }
}
