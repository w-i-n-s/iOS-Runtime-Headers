/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFSelectionController : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    } _adjustedPoint;
    BOOL _cancelled;
    long _firstIndex;
    BOOL _hiding;
    BOOL _instantHighlightMode;
    BOOL _instantModeIsSuspended;
    BOOL _isTracking;
    long _lastIndex;
    BOOL _needsLayout;
    UIPDFPageView *_pageView;
    BOOL _preceeds;
    BOOL _rangeMode;
    BOOL _resizingWidget;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _selectionBounds;
    struct CGPoint { 
        float x; 
        float y; 
    } _selectionFixedPoint;
    <UIPDFSelectionWidget><NSObject> *_selectionWidget;
    struct CGPoint { 
        float x; 
        float y; 
    } _startPoint;
}

@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } adjustedPoint;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } currentSelectionPoint;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } initialSelectionPoint;
@property (nonatomic) BOOL instantHighlightMode;
@property (nonatomic, readonly) BOOL isTracking;
@property (nonatomic) UIPDFPageView *pageView;
@property (nonatomic, readonly) BOOL rangeMode;
@property (nonatomic, readonly) <UIPDFSelectionWidget> *selectionWidget;

- (void)addSelectionWidget:(id)arg1;
- (void)adjustSelection:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })adjustedPoint;
- (void)clearSelection;
- (struct CGPoint { float x1; float x2; })currentSelectionPoint;
- (void)dealloc;
- (id)description;
- (void)endTracking:(struct CGPoint { float x1; float x2; })arg1;
- (void)extendSelectionToParagraph;
- (void)hideWidget;
- (id)init;
- (struct CGPoint { float x1; float x2; })initialSelectionPoint;
- (BOOL)instantHighlightMode;
- (BOOL)isTracking;
- (void)layoutSelections;
- (id)pageView;
- (BOOL)rangeMode;
- (struct CGPoint { float x1; float x2; })selectedPointOffset;
- (void)selectionHide:(id)arg1;
- (void)selectionHideFromAncestor:(id)arg1;
- (void)selectionShow:(id)arg1;
- (void)selectionShowDelayed:(id)arg1;
- (void)selectionShowToAncestor:(id)arg1;
- (id)selectionWidget;
- (void)setInstantHighlightMode:(BOOL)arg1;
- (void)setPageView:(id)arg1;
- (void)setSelectionFor:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)shouldTrackAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)startSelectingAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)startTracking:(struct CGPoint { float x1; float x2; })arg1 andPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)startTracking:(struct CGPoint { float x1; float x2; })arg1 showMagnifier:(BOOL*)arg2;
- (void)suspendInstantHighlightMode;
- (void)tracking:(struct CGPoint { float x1; float x2; })arg1 andPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)tracking:(struct CGPoint { float x1; float x2; })arg1 showMagnifier:(BOOL*)arg2;
- (BOOL)useParagraphMode;

@end
