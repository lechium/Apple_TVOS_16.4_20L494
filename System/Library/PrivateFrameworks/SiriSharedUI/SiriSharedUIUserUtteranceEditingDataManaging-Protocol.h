//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriSharedUI/NSObject-Protocol.h>

@class AFUserUtterance, AFUserUtteranceSelectionResults, NSAttributedString, NSString;

@protocol SiriSharedUIUserUtteranceEditingDataManaging <NSObject>
@property(readonly, nonatomic) AFUserUtterance *userUtterance;
- (_Bool)isEditedTextSameAsUtterance:(NSString *)arg1;
- (NSAttributedString *)attributedStringAtIndex:(long long)arg1;
- (long long)numberOfAlternativeUtterances;
- (AFUserUtteranceSelectionResults *)selectionResultsForAlternateTextAtIndex:(long long)arg1;
- (AFUserUtteranceSelectionResults *)selectionResultsForEditedText:(NSString *)arg1;
@end

