/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSKCommandHistory, TSKCommandSelectionBehaviorHistory, TSKViewState, TSPLazyReference, TSPObject;

@interface TSKDocumentSupport : TSPObject <TSKCommandHistoryDelegate> {
    NSString *_cachedRedoActionString;
    unsigned int _cachedRedoCount;
    NSString *_cachedUndoActionString;
    unsigned int _cachedUndoCount;
    TSPLazyReference *_commandHistoryReference;
    TSPLazyReference *_commandSelectionBehaviorHistoryReference;
    TSKViewState *_viewState;
    TSPObject *_webState;
}

@property(readonly) NSString * cachedRedoActionString;
@property(readonly) unsigned int cachedRedoCount;
@property(readonly) NSString * cachedUndoActionString;
@property(readonly) unsigned int cachedUndoCount;
@property(readonly) TSKCommandHistory * commandHistory;
@property(readonly) TSKCommandSelectionBehaviorHistory * commandSelectionBehaviorHistory;
@property(readonly) BOOL hasCommands;
@property(readonly) BOOL isDocumentEditedSinceLastSave;
@property(retain) TSKViewState * viewState;
@property(retain) TSPObject * webState;

- (id)cachedRedoActionString;
- (unsigned int)cachedRedoCount;
- (id)cachedUndoActionString;
- (unsigned int)cachedUndoCount;
- (void)clearCommandHistory;
- (id)commandHistory;
- (void)commandHistoryChanged:(id)arg1;
- (id)commandSelectionBehaviorHistory;
- (void)dealloc;
- (void)didLoadCommandHistory:(id)arg1;
- (void)documentWasSaved;
- (BOOL)hasCommands;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (BOOL)isDocumentEditedSinceLastSave;
- (id)newCommandHistoryReference;
- (id)newCommandSelectionBehaviorHistoryReference;
- (void)saveToArchiver:(id)arg1;
- (void)setViewState:(id)arg1;
- (void)setWebState:(id)arg1;
- (id)viewState;
- (id)webState;

@end