//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDBetaAppFeedback, ASDBetaAppVersion;

@interface BetaAppFeedbackMemoryEntity
{
    ASDBetaAppVersion *_appVersion;	// 8 = 0x8
    ASDBetaAppFeedback *_feedback;	// 16 = 0x10
}

+ (id)defaultProperties;	// IMP=0x004000000005bb3f
+ (Class)databaseEntityClass;	// IMP=0x001000000005bb2e
- (void).cxx_destruct;	// IMP=0x002000000005bfc9

@end

