#include <iostream>
#include <filesystem>
#include <fstream>
#include <chrono>

using namespace std;
namespace fs = std::filesystem;

int Fib(int n)
{
    if (n == 0 || n == 1) return n;
    return Fib(n - 1) + Fib(n - 2);
}


int main()
{
    //fs::path dir{"mydir"};
    //fs::create_directory(dir);

    //fs::directory_entry dir_obj(dir);

    /*if (!dir_obj.exists())
        fs::create_directory(dir_obj);
    else
        fs::remove(dir_obj);*/

    /*cout << dir_obj.is_directory() << "\n";
    cout << dir_obj.is_regular_file() << "\n";

    fs::path file_path{"file.txt"};
    dir_obj.assign(dir_obj/file_path);
    cout << dir_obj.path() << "\n";

    ofstream file{ dir_obj.path() };*/

    /*for (auto file : fs::directory_iterator(dir_obj))
    {
        cout << file.path() << " ";
        cout << ((file.is_directory()) ? "dir " : "file ") << file.file_size() << "\n";
    }*/


    auto time_now = chrono::system_clock::now();

    //cout << chrono::time_point_cast<chrono::years::duration>(time_now) << "\n";
    cout << chrono::time_point_cast<chrono::hours>(time_now);
    



    int n = 41;

    auto time_start = chrono::steady_clock::now();

    int res = Fib(n);

    auto time_end = chrono::steady_clock::now();

    chrono::duration<double> time_duration = time_end - time_start;

    cout << "Fib for n = " << n << " = " << res << " for " << time_duration << "\n";
        
}
