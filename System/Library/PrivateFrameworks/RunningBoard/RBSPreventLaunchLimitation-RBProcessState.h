//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/RBSPreventLaunchLimitation.h>

@interface RBSPreventLaunchLimitation (RBProcessState)
- (_Bool)allowedWithAttribute:(id)arg1 error:(id *)arg2;	// IMP=0x00600000000455ca
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;	// IMP=0x00600000000452cc
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x00600000000451dc
- (void)applyToAcquisitionContext:(id)arg1;	// IMP=0x00600000000451c2
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x00600000000451a8
@end

