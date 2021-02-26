//输入：
//words = ["aaaa", "asas", "able", "ability", "actt", "actor", "access"],
//puzzles = ["aboveyz", "abrodyz", "abslute", "absoryz", "actresz", "gaswxyz"]
//输出：[1, 1, 3, 2, 4, 0]

//#include<stdlib.h>
//#include<string.h>
//
//int* findNumOfValidWords(char ** words, int wordsSize, char ** puzzles, int puzzlesSize, int* returnSize)
//{
//	*returnSize = puzzlesSize;
//	int* p = (int*)malloc(puzzlesSize * 4);
//	int i = 0;
//	for (i = 0; i < puzzlesSize; i++)//puzzles[i]
//	{
//		int count = 0;
//		int j = 0;
//		for (j = 0; j < wordsSize; j++)//words[j]
//		{
//			//判断words[j]中是否有puzzles[i]的首字母
//			int sz = strlen(words[j]);
//			int k = 0;
//			while (sz)
//			{
//				if (*(words[j] + k) == *(puzzles[i]))
//					break;
//				k++;
//				sz--;
//			}
//			if (sz == 0)
//				continue;
//			else//words[j]的每一个字母在puzzles[i]中是否都能找到
//			{
//				int sz1 = strlen(words[j]);
//				int sz2 = strlen(puzzles[i]);
//				int x = 0;
//				int y = 0;
//				for (x = 0; x < sz1; x++)
//				{
//					for (y = 0; y < sz2; y++)
//					{
//						if (words[j][x] == puzzles[i][y])
//							break;
//					}
//					if (y == sz2)
//						break;
//				}
//				if ((x == sz1)&&(y < sz2))
//					count++;
//			}
//		}
//		p[i] = count;
//	}
//	return p;
//}
//
//struct unordered_map {
//	int key, val;
//	UT_hash_handle hh;
//};
//
//int* findNumOfValidWords(char** words, int wordsSize, char** puzzles, int puzzlesSize, int* returnSize) {
//	struct unordered_map* frequency = NULL;
//
//	for (int i = 0; i < wordsSize; i++) {
//		int n = strlen(words[i]);
//		int mask = 0;
//		for (int j = 0; j < n; j++) {
//			mask |= (1 << (words[i][j] - 'a'));
//		}
//		if (__builtin_popcount(mask) <= 7) {
//			struct unordered_map* tmp;
//			HASH_FIND_INT(frequency, &mask, tmp);
//			if (tmp == NULL) {
//				tmp = malloc(sizeof(struct unordered_map));
//				tmp->key = mask;
//				tmp->val = 1;
//				HASH_ADD_INT(frequency, key, tmp);
//			}
//			else {
//				tmp->val++;
//			}
//		}
//	}
//
//	int* ans = malloc(sizeof(int)* puzzlesSize);
//	*returnSize = 0;
//
//	for (int i = 0; i < puzzlesSize; i++) {
//		int total = 0;
//
//		// 枚举子集方法一
//		// for (int choose = 0; choose < (1 << 6); ++choose) {
//		//     int mask = 0;
//		//     for (int j = 0; j < 6; ++j) {
//		//         if (choose & (1 << j)) {
//		//             mask |= (1 << (puzzles[i][j + 1] - 'a'));
//		//         }
//		//     }
//		//     mask |= (1 << (puzzles[i][0] - 'a'));
//		//     struct unordered_map* tmp;
//		//     HASH_FIND_INT(frequency, &mask, tmp);
//		//     if (tmp != NULL) {
//		//         total += tmp->val;
//		//     }
//		// }
//
//		// 枚举子集方法二
//		int mask = 0;
//		for (int j = 1; j < 7; ++j) {
//			mask |= (1 << (puzzles[i][j] - 'a'));
//		}
//		int subset = mask;
//		do {
//			int s = subset | (1 << (puzzles[i][0] - 'a'));
//			struct unordered_map* tmp;
//			HASH_FIND_INT(frequency, &s, tmp);
//			if (tmp != NULL) {
//				total += tmp->val;
//			}
//			subset = (subset - 1) & mask;
//		} while (subset != mask);
//		ans[(*returnSize)++] = total;
//	}
//	return ans;
//}
