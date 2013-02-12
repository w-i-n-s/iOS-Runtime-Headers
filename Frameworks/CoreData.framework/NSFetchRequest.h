/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSEntityDescription, NSPredicate;

@interface NSFetchRequest : NSPersistentStoreRequest <NSCoding> {
    struct _fetchRequestFlags { 
        unsigned int distinctValuesOnly : 1; 
        unsigned int includesSubentities : 1; 
        unsigned int includesPropertyValues : 1; 
        unsigned int resultType : 3; 
        unsigned int returnsObjectsAsFaults : 1; 
        unsigned int excludePendingChanges : 1; 
        unsigned int isInUse : 1; 
        unsigned int entityIsName : 1; 
        unsigned int refreshesRefetched : 1; 
        unsigned int propertiesValidated : 1; 
        unsigned int _RESERVED : 20; 
    unsigned int _batchSize;
    NSEntityDescription *_entity;
    unsigned long _fetchLimit;
    } _flags;
    NSArray *_groupByProperties;
    NSPredicate *_havingPredicate;
    unsigned int _offset;
    NSPredicate *_predicate;
    NSArray *_relationshipKeyPathsForPrefetching;
    NSArray *_sortDescriptors;
    NSArray *_valuesToFetch;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)fetchRequestWithEntityName:(id)arg1;
+ (void)initialize;

- (void)_incrementInUseCounter;
- (BOOL)_isEditable;
- (id)_newValidatedProperties:(id)arg1 groupBy:(BOOL)arg2 error:(id*)arg3;
- (void)_resolveEntityWithContext:(id)arg1;
- (void)_throwIfNotEditable;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;
- (id)affectedStores;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (id)entityName;
- (unsigned int)fetchBatchSize;
- (unsigned int)fetchLimit;
- (unsigned int)fetchOffset;
- (id)groupByProperties;
- (BOOL)hasChanges;
- (unsigned int)hash;
- (id)havingPredicate;
- (BOOL)includesPendingChanges;
- (BOOL)includesPropertyValues;
- (BOOL)includesSubentities;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)predicate;
- (id)propertiesToFetch;
- (id)propertiesToGroupBy;
- (id)relationshipKeyPathsForPrefetching;
- (unsigned int)requestType;
- (unsigned int)resultType;
- (BOOL)returnsDistinctResults;
- (BOOL)returnsObjectsAsFaults;
- (void)setAffectedStores:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setFetchBatchSize:(unsigned int)arg1;
- (void)setFetchLimit:(unsigned int)arg1;
- (void)setFetchOffset:(unsigned int)arg1;
- (void)setGroupByProperties:(id)arg1;
- (void)setHavingPredicate:(id)arg1;
- (void)setIncludesPendingChanges:(BOOL)arg1;
- (void)setIncludesPropertyValues:(BOOL)arg1;
- (void)setIncludesSubentities:(BOOL)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPropertiesToFetch:(id)arg1;
- (void)setPropertiesToGroupBy:(id)arg1;
- (void)setRelationshipKeyPathsForPrefetching:(id)arg1;
- (void)setResultType:(unsigned int)arg1;
- (void)setReturnsDistinctResults:(BOOL)arg1;
- (void)setReturnsObjectsAsFaults:(BOOL)arg1;
- (void)setShouldRefreshRefetchedObjects:(BOOL)arg1;
- (void)setSortDescriptors:(id)arg1;
- (BOOL)shouldRefreshRefetchedObjects;
- (id)sortDescriptors;
- (id)stores;

@end