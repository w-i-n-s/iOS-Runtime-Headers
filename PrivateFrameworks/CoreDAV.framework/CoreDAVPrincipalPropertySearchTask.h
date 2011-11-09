/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet, NSDictionary;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask  {
    NSSet *_searchItems;
    BOOL _applyToPrincipalCollectionSet;
    NSDictionary *_extraAttributes;
}

@property(retain) NSSet * searchItems;
@property(retain) NSDictionary * extraAttributes;
@property BOOL applyToPrincipalCollectionSet;


- (BOOL)applyToPrincipalCollectionSet;
- (id)initWithPropertySearches:(id)arg1 propertiesToFind:(id)arg2 atURL:(id)arg3 applyToPrincipalCollectionSet:(BOOL)arg4 extraAttributes:(id)arg5;
- (id)searchItems;
- (void)setApplyToPrincipalCollectionSet:(BOOL)arg1;
- (void)setSearchItems:(id)arg1;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)setExtraAttributes:(id)arg1;
- (id)extraAttributes;
- (void)dealloc;
- (id)httpMethod;
- (id)requestBody;

@end