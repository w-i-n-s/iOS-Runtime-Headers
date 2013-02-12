/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFComposeRecipientAtomDelegate>, MFComposeRecipient, UITextInputTraits;

@interface MFComposeRecipientAtom : MFAtomView {
    unsigned int _wasSelectedWhenTouchesBegan : 1;
    unsigned int _touchesWereCancelled : 1;
    <MFComposeRecipientAtomDelegate> *_delegate;
    MFComposeRecipient *_recipient;
    UITextInputTraits *_traits;
}

@property <MFComposeRecipientAtomDelegate> * delegate;
@property(readonly) MFComposeRecipient * recipient;

- (void)_handleKeyEvent:(struct __GSEvent { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)handleTouchAndHold;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 recipient:(id)arg2 style:(int)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 recipient:(id)arg2;
- (void)moveLeft;
- (void)moveRight;
- (id)recipient;
- (void)setDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end