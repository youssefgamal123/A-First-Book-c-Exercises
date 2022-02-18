int findMax(int vals[MAXELS])
	{
		int i, max = vals[0];
		for (i = 1; i < MAXELS; i++)
			if (max > vals[i])
				max = vals[i];
		return max;
	}
