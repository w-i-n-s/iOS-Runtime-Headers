/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKGLView : GLKView <GLKViewDelegate> {
    CADisplayLink *_displayLink;
    int _displayLinkFrameInterval;
    BOOL _displayLinkPaused;
    double _lastUpdateTime;
    unsigned int _latestDrawErrror;
    BOOL _needsRender;
    int _preferredFramesPerSecond;
    UIScreen *_screen;
    BOOL _synchronizesWithCA;
    BOOL _viewIsVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isPaused, nonatomic) BOOL paused;
@property (nonatomic) int preferredFramesPerSecond;
@property (readonly) Class superclass;
@property (nonatomic) BOOL synchronizesWithCA;
@property (nonatomic, readonly) double timeSinceLastUpdate;

- (void).cxx_destruct;
- (void)_createDisplayLinkForScreen:(id)arg1;
- (void)_displayLinkFired;
- (void)_invalidateLastUpdateTime;
- (BOOL)_isLastUpdateTimeValid;
- (void)_loadVertexShader:(id)arg1 fragmentShader:(id)arg2 inBundle:(id)arg3 forProgram:(unsigned int*)arg4 cache:(BOOL)arg5;
- (BOOL)_needsDisplayLink;
- (void)_pauseByNotification;
- (void)_resumeByNotification;
- (void)_update;
- (void)_updateGLLayerIsAsynchronous;
- (void)_updateScreenIfChanged;
- (void)dealloc;
- (void)didMoveToWindow;
- (unsigned int)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)init;
- (BOOL)isPaused;
- (void)layoutSubviews;
- (int)preferredFramesPerSecond;
- (void)setNeedsRender;
- (void)setPaused:(BOOL)arg1;
- (void)setPreferredFramesPerSecond:(int)arg1;
- (void)setSynchronizesWithCA:(BOOL)arg1;
- (id)snapshot;
- (BOOL)synchronizesWithCA;
- (double)timeSinceLastUpdate;
- (void)update;
- (BOOL)viewIsVisible;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
