
#ifndef SYNCONFIGBASE_H
#define SYNCONFIGBASE_H

#include "main.h"
#include "vec.h"

class CSynConfigBase
{
public:
	CSynConfigBase();

	bool LoadFromSynConfig(string fileName = "Syn_config.txt");

	bool DumpToSynConfig();

	static bool m_flagRandomness;
	static int m_stepCountMax;
	static string m_inputPrefix;
	static string m_coarsePrefix;
	static string m_outputPrefix;
	static Flt m_timeStep;

protected:
	virtual void ResetConfig();

	void DumpTimeAndDate(FILE* file);

	virtual void DumpParameters(FILE* file);

	virtual void UpdateOutputPrefix();

	void DumpStringParam(FILE* file, const char* param, const string str);
};

#endif SYNCONFIGBASE_H
