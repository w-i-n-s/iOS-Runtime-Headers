/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityDescription, NSRelationshipDescription, NSString;

@interface NSRelationshipDescription : NSPropertyDescription {
    unsigned int _deleteRule;
    NSEntityDescription *_destinationEntity;
    NSRelationshipDescription *_inverseRelationship;
    NSString *_lazyDestinationEntityName;
    NSString *_lazyInverseRelationshipName;
    unsigned long _maxCount;
    unsigned long _minCount;
    void *_reserved5;
    void *_reserved6;
}

+ (void)initialize;

- (void)_createCachesAndOptimizeState;
- (id)_initWithName:(id)arg1;
- (BOOL)_isRelationship;
- (BOOL)_isToManyRelationship;
- (BOOL)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4;
- (unsigned int)_propertyType;
- (void)_setLazyDestinationEntityName:(id)arg1;
- (void)_updateInverse:(id)arg1;
- (BOOL)_validateValuesAreOfDestinationEntity:(id)arg1 source:(id)arg2;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned int)arg2 proxyContext:(id)arg3;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned int)arg2;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)deleteRule;
- (id)description;
- (id)destinationEntity;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)inverseRelationship;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isIndexed;
- (BOOL)isOrdered;
- (BOOL)isToMany;
- (unsigned int)maxCount;
- (unsigned int)minCount;
- (void)setDeleteRule:(unsigned int)arg1;
- (void)setDestinationEntity:(id)arg1;
- (void)setInverseRelationship:(id)arg1;
- (void)setMaxCount:(unsigned int)arg1;
- (void)setMinCount:(unsigned int)arg1;
- (void)setOrdered:(BOOL)arg1;
- (id)versionHash;

@end