#include <iostream>

void TrojkatTop();
void TrojkatBot();
int x;

int main() {

    std::cout << "podaj wysokosc i szerokosc rombu:\n";
    std::cin >> x;

    TrojkatTop();
    TrojkatBot();

    return 0;
}

void TrojkatTop() {
    //powtarzanie pętli w osi Y ileś razy
    for(int i = 0; i <= x - 1; i++)
    {
        //powtarzanie pętli w osi X ileś razy
        for(int j = 1; j <= x + i; j++) 
        {
            if(j == x - i || j == x + i)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

void TrojkatBot() {   
    //powtarzanie pętli w osi Y ileś razy
    for(int i = x - 2; i >= 0; i--)
    {
        //powtarzanie pętli w osi X ileś razy
        for(int j = 1; j <= x + i; j++) 
        {
            if(j == x - i || j == x + i)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}