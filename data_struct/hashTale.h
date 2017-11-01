#pragma once //是一个比较常用的C/C++杂注，只要在头文件的最开始加入这条杂注，就能够保证头文件只被编译一次。
typedef struct HashTable HashTable;

#ifdef __cplusplus
extern "C"{
#endif
	/*new an instance of HashTable*/
	HashTable *hash_table_new();

	/*delete an instance of HashTable,all values are removed automatically*/
	void hash_table_delete(HashTable *ht);

	/*add or update a value to ht,free value(if not null) is called auto matically when the value is removed.return 0 if success,-1 if error occurred.*/

	#define hash_table_put(ht,key,value) hash_table_put2(ht,key,value,NULL);
	int hash_table_put2(HashTable *ht,char *key,void *value,void(*free_value)(void *));

	/*get a value indexed by key,return NULL if not found.*/
	void * hash_table_get(HashTable *ht,char *key);

	/*remove a value indexed by key*/
	void hash_table_rm(HashTable *ht,char *key);

#ifdef __cplusplus
}
#endif
