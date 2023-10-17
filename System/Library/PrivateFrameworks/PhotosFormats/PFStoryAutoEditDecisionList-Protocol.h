//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol PFStoryAutoEditDecisionList, PFStoryRecipeClip;

@protocol PFStoryAutoEditDecisionList
@property(readonly, nonatomic) NSString *diagnosticDescription;
@property(readonly, nonatomic) long long numberOfClips;
@property(readonly, nonatomic) NSString *songAssetIdentifier;
- (_Bool)isEqualToAutoEditDecisionList:(id <PFStoryAutoEditDecisionList>)arg1;
- (id <PFStoryRecipeClip>)clipAtIndex:(long long)arg1;
@end

