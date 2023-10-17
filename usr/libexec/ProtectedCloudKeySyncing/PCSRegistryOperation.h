//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBlockOperation.h>

@class NSError, NSString;

@interface PCSRegistryOperation : NSBlockOperation
{
    NSError *_error;	// 8 = 0x8
    NSString *_operationUUID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000055a3
@property(retain) NSString *operationUUID; // @synthesize operationUUID=_operationUUID;
@property(retain) NSError *error; // @synthesize error=_error;
- (id)pendingDependenciesString:(id)arg1;	// IMP=0x0010000000005408
- (id)debugDescription;	// IMP=0x00100000000052e7
- (id)description;	// IMP=0x00100000000051d5
- (id)operationStateString;	// IMP=0x0010000000005149
- (id)selfname;	// IMP=0x0010000000005019
- (id)init;	// IMP=0x0010000000004f7e

@end
