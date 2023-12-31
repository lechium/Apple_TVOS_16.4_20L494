//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoardServices/RBSDomainAttribute.h>

@interface RBSDomainAttribute (RBProcessState)
- (_Bool)isValidForContext:(id)arg1 withError:(id *)arg2;	// IMP=0x0070000000078a02
- (void)applyToAcquisitionContext:(id)arg1;	// IMP=0x00700000000788a0
- (id)effectiveAttributesWithContext:(id)arg1;	// IMP=0x007000000007869c
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x00700000000783ea
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x007000000007802f
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0070000000077e18
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x0070000000077860
@end

