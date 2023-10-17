//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, VNRequest;

__attribute__((visibility("hidden")))
@interface _VNRequestForensicsRequestAndErrorTuple : NSObject
{
    VNRequest *_request;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000038bf1
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) VNRequest *request; // @synthesize request=_request;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000038afa
- (unsigned long long)hash;	// IMP=0x0000000000038a69
- (id)description;	// IMP=0x00000000000389d6
- (id)initWithRequest:(id)arg1 error:(id)arg2;	// IMP=0x000000000003892e

@end

