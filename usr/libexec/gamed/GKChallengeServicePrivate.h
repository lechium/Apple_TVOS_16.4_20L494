//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKChallengeServicePrivate
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0020000000090d45
+ (Class)interfaceClass;	// IMP=0x0010000000090d34
- (oneway void)startGame:(id)arg1 withChallenge:(id)arg2;	// IMP=0x00200000000914bd
- (oneway void)getCountOfChallengesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000090d50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
