//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol PFStoryRecipeClip;

@protocol PFStoryRecipeClip
@property(readonly, nonatomic) NSString *diagnosticDescription;
@property(readonly, nonatomic) long long transition;
@property(readonly, nonatomic) long long motionStyle;
@property(readonly, nonatomic) CDStruct_198678f7 videoCueOffset;
@property(readonly, nonatomic) CDStruct_198678f7 maximumDuration;
@property(readonly, nonatomic) CDStruct_198678f7 idealDuration;
@property(readonly, nonatomic) CDStruct_198678f7 minimumDuration;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) NSString *assetIdentifier;
- (_Bool)isEqualToClip:(id <PFStoryRecipeClip>)arg1;
@end

