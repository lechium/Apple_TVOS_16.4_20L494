//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/NSObject-Protocol.h>

@class AFUserUtteranceSelectionResults, NSString;
@protocol SiriSharedUIViewControlling;

@protocol SiriUIAceObjectViewControllerDelegatePrivate <NSObject>
- (void)siriViewControllerRequestTearDownEditingViewController:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriViewControllerRequestToPin:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriViewController:(id <SiriSharedUIViewControlling>)arg1 startCorrectedSpeechRequestWithText:(NSString *)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(AFUserUtteranceSelectionResults *)arg4;
- (void)siriViewControllerDidEndEditing:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriViewControllerWillBeginEditing:(id <SiriSharedUIViewControlling>)arg1;
- (void)siriViewControllerRequestKeyboardForTapToEditWithCompletion:(void (^)(_Bool))arg1;
- (_Bool)siriViewControllerShouldPreventUserInteraction:(id <SiriSharedUIViewControlling>)arg1;
@end

