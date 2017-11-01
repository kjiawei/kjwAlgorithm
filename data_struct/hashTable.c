#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "HashTable.h"

#define TABLE_SIZE (1024*1024)

/*element of the hash table's chain list*/

struct kv
{
	struct kv *next;
	char *key;
	void *value;
	void(*free_value)(void*);
};

struct HashTable
{
	struct kv **table;
};

static void init_kv(struct kv *kv)
{
	kv->next = NULL;
	kv->key = NULL;
	kv->value = NULL;
	kv->free_value = NULL;
}

static void free_kv(struct kv *kv)
{
	if(kv){
		if(kv->free_value)
		{
			kv->free_value(kv->value);
		}
		free(kv->key);
		kv->key = NULL;
		free(kv);
	}
}

static unsigned int hash_33(char *key){
	unsigned int hash = 0; 
	while (*key){
		hash = (hash<<5) + hash + *key++;
	}
	return hash;
}

HashTable *hash_table_new()
{
	HashTable *ht = malloc(sizeof(HashTable));
	if(NULL==ht){
		hash_table_delete(ht);
		return NULL;
	}
	ht->table = malloc(sizeof(struct kv*)*TABLE_SIZE);
	if(NULL==ht->table)
	{
		hash_table_delete(ht);
		return NULL;
	}
	memset(ht->table,0,sizeof(struct kv*)*TABEL_SIZE);
	return ht;
}

void hash_table_delete(HashTable *ht)
{
	if(ht){
	if(ht->table){
	int i = 0;
	for(i=0;i<TABLE_SIZE;i++){
	struct kv *p = ht->table[i];
	struct kv *q = NULL;
	while(p){
	q = p->next;
	free_kv(p);
	p=q;
	}}
	free(ht->table);
	ht->table = NULL;	
	}
	free(ht);
	}
}

int hash_table_put2(HashTable *ht,char *key,void *value,void(*free_value)(void *))
{
	int i = hash_33(key) % TABLE_SIZE;
	struct kv *p = ht->table[i];
	struct kv *prep = p;
	while(p){
		if(strcmp(p->key,key)==0){
		if(p->free_value){
			p->free_value(p->value);
		}
		p->value = value;
		p->free_value = free_value;
		break;
	}
	prep  = p;
	p = p->next;
	}
	if(p==NULL){
		char *kstr
}



int main()
{

	return 0;
}
