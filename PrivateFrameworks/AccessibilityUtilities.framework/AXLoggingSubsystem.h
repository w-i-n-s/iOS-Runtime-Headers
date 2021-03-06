/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLoggingSubsystem : NSObject

+ (id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2;
+ (int)defaultLogLevel;
+ (int)effectiveLogLevel;
+ (id)errorWithDescription:(id)arg1;
+ (id)identifier;
+ (void)initialize;
+ (void)initializeSubsytem;
+ (void)resetPreferredLogLevel;
+ (void)setPreferredLogLevel:(int)arg1;
+ (void)setShouldLogToFile:(BOOL)arg1;
+ (BOOL)shouldIncludeBacktraceInLogs;
+ (BOOL)shouldIncludeFileLineAndFunctionInLogs;
+ (BOOL)shouldLogToFile;
+ (BOOL)shouldProcessMessageForLogs;
+ (id)subsystems;
+ (double)threshold;
+ (BOOL)willLog;
+ (id)wrapError:(id)arg1 description:(id)arg2;

@end
