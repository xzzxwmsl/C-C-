#pragma once
#include"pch.h"
#include<vector>
using namespace std;
class Lexical
{
public:
	friend class Output;
	Lexical(vector<string>);
	~Lexical();
	void showPro();
	string getPro();
	TokenSet getToken();
	string tokToName(TokenType, string);
	void doLexical();
	void showResult();
private:
	int len; // �����ֽ���
	int toknum; // token��Ŀ
	int index; //��ǰ��ȡλ��
	vector<string> V;
	vector<TokenSet> TokSet; // �������е�token
	string proText; // ������һ�𱣴��� proText ��
	int line; // ��ǰ��ȡ������ĵ�n��
};

