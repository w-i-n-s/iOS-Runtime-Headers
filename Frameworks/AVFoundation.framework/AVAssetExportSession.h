/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, AVAsset, AVAudioMix, AVAssetExportSessionInternal, NSString, NSURL, AVVideoComposition, NSArray;

@interface AVAssetExportSession : NSObject  {
    AVAssetExportSessionInternal *_exportSession;
}

@property(readonly) NSString * presetName;
@property(retain,readonly) AVAsset * asset;
@property(readonly) NSArray * supportedFileTypes;
@property(copy) NSString * outputFileType;
@property(copy) NSURL * outputURL;
@property(readonly) int status;
@property(readonly) NSError * error;
@property(readonly) float progress;
@property(readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxDuration;
@property(readonly) long long estimatedOutputFileLength;
@property struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property(copy) NSArray * metadata;
@property long long fileLengthLimit;
@property(copy) AVAudioMix * audioMix;
@property(copy) AVVideoComposition * videoComposition;
@property BOOL shouldOptimizeForNetworkUse;

+ (id)exportPresetsCompatibleWithAsset:(id)arg1;
+ (id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumDurationForPreset:(id)arg1 properties:(id)arg2;
+ (long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 properties:(id)arg3;
+ (id)allExportPresets;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })_maximumDurationForPreset:(id)arg1 fileSizeBytesLimit:(long long)arg2 properties:(id)arg3;
+ (long long)_estimatedOutputFileLengthForPreset:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 properties:(id)arg3;
+ (id)_settingForPreset:(id)arg1;
+ (id)_utTypesForPresets;
+ (id)_figRemakerNotificationNames;
+ (id)_utTypesForAudioOnly;

- (void)finalize;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (float)progress;
- (void)setOutputFileType:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (void)exportAsynchronouslyWithCompletionHandler:(id)arg1;
- (void)cancelExport;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxDuration;
- (long long)estimatedOutputFileLength;
- (long long)fileLengthLimit;
- (void)setFileLengthLimit:(long long)arg1;
- (id)initWithAsset:(id)arg1 presetName:(id)arg2;
- (void)_removeListeners;
- (id)presetName;
- (id)_actualPresetName;
- (id)supportedFileTypes;
- (void)_updateProgress;
- (void)_transitionToStatus:(int)arg1 error:(id)arg2;
- (struct OpaqueFigRemaker { }*)_createFigRemaker;
- (void)_addListeners;
- (void)_handleFigRemakerNotificationAsync:(id)arg1;
- (struct CGSize { float x1; float x2; })_getSourceDimension;
- (void)_handleFigRemakerNotification:(id)arg1;
- (id)_actualSettingForPreset:(id)arg1;
- (id)_settingForFigRemaker;
- (BOOL)_canPassThroughVideo:(id)arg1 checkEnabled:(BOOL)arg2 checkAll:(BOOL)arg3 checkProtected:(BOOL)arg4;
- (BOOL)_canPassThroughAudio:(id)arg1 checkEnabled:(BOOL)arg2 checkProtected:(BOOL)arg3;
- (BOOL)_hasProtectedNonAudioVideoTracks;
- (BOOL)_totalSizeOfTracksIsWithinFileLengthLimit:(id)arg1 forSetting:(id)arg2;
- (int)_getTrackCountOfType:(id)arg1 checkEnabled:(BOOL)arg2;
- (id)outputURL;
- (id)outputFileType;
- (BOOL)shouldOptimizeForNetworkUse;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (id)audioMix;
- (void)setAudioMix:(id)arg1;
- (id)asset;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (int)status;
- (id)error;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)description;
- (id)init;
- (void)dealloc;

@end