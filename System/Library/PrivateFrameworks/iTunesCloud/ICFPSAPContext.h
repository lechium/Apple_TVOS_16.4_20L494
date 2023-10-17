//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICFPSAPContext : NSObject
{
}

- (_Bool)signData:(id)arg1 returningSignatureData:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000000a4745
- (_Bool)processResponseWithSignatureData:(id)arg1 data:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a46f6
- (_Bool)exchangeWithSAPVersion:(unsigned int)arg1 data:(id)arg2 returningData:(id *)arg3 exchangeStatus:(char *)arg4 error:(id *)arg5;	// IMP=0x00000000000a4691
- (void)dealloc;	// IMP=0x00000000000a4662
- (id)initReturningError:(id *)arg1;	// IMP=0x00000000000a45f2

@end

