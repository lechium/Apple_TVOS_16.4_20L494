//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PCSRegistryOperation;

@interface PCSRegistryOperationPair : NSObject
{
    PCSRegistryOperation *_actualOperation;	// 8 = 0x8
    PCSRegistryOperation *_finishOperation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000005746
@property(retain) PCSRegistryOperation *finishOperation; // @synthesize finishOperation=_finishOperation;
@property(retain) PCSRegistryOperation *actualOperation; // @synthesize actualOperation=_actualOperation;
- (id)description;	// IMP=0x001000000000566d
- (id)init:(id)arg1 finish:(id)arg2;	// IMP=0x00100000000055d4

@end

