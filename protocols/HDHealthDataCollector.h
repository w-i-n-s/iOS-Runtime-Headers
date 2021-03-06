/* Generated by RuntimeBrowser.
 */

@protocol HDHealthDataCollector <NSObject>

@required

- (void)collectionStartedForType:(HKObjectType *)arg1 collectionInterval:(double)arg2;
- (void)collectionStoppedForType:(HKObjectType *)arg1;
- (NSString *)dataCollectorDiagnosticDescription;
- (BOOL)disabled;
- (void)setDisabled:(BOOL)arg1;
- (void)updateCollectionInterval:(double)arg1 forType:(HKObjectType *)arg2;
- (void)updateHistoricalData;

@end
