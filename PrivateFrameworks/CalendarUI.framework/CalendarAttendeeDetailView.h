/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class ABAbstractCardView, NSString, UIModalView, CalendarModel;



@interface CalendarAttendeeDetailView : UIView <CalendarView>
{
    CalendarModel *_model;
    ABAbstractCardView *_cardView;
    UIModalView *_alertSheet;
    NSString *_firstName;
    NSString *_lastName;
}

+ (id)navigationTitleForModel:(id)arg1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)_selectedAttendeeChanged:(id)arg1;
- (void)setModel:(id)arg1;
- (void)cleanUp;
- (void)finishedTransitionIn;
- (void)setDisplayedAttendee:(void*)arg1;
- (void)cardViewer:(id)arg1 selectedPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)cardViewer:(id)arg1 presentActionsSheet:(id)arg2;
- (void)cardViewer:(id)arg1 dismissActionsSheet:(id)arg2;
- (id)unknownPersonCardViewerPossibleFirstname:(id)arg1;
- (id)unknownPersonCardViewerPossibleLastname:(id)arg1;
- (void)unknownPersonCardViewer:(id)arg1 presentPickingOverlay:(id)arg2;
- (void)unknownPersonCardViewer:(id)arg1 dismissPickingOverlay:(id)arg2;
- (void)unknownPersonCardViewer:(id)arg1 didResolveToPerson:(void*)arg2;

@end