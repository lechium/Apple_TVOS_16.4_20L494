//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTTransport_replayer;

@interface ReplayErrorTransport : NSObject
{
    GTTransport_replayer *_transport;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000002e089
- (void)sendErrorToHost:(id)arg1;	// IMP=0x001000000002df6b
- (id)initWithTransport:(id)arg1;	// IMP=0x001000000002df00

@end

