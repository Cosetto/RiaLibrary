#include "../../lib/Rxx/RxStream.h"

using namespace Rut;


int main()
{
	RxStream::TextStream stream_out(L"1.txt", RIO_OUT, RFM_UTF8);
	stream_out << L"���Ĳ���" << "\n" << "���Ի���";
	std::string x;
	stream_out >> x;
	std::wstring e;
	stream_out >> e;
}