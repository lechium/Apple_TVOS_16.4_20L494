//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TIFeedbackController;

@protocol TIFeedbackControllerDelegate
- (void)sendTerminationEventUsingStudyDataFromFeedbackController:(TIFeedbackController *)arg1;
- (void)sendCompletionEventUsingStudyDataFromFeedbackController:(TIFeedbackController *)arg1;
- (void)sendInitiationEventUsingStudyDataFromFeedbackController:(TIFeedbackController *)arg1;
- (void)accumulateWordCounts;
- (void)resetWordCounts;
@end

