//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SKProductsResponse : NSObject
{
    id _internal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001103d6
- (void)_setProducts:(id)arg1;	// IMP=0x0010000000110375
- (void)_setInvalidIdentifiers:(id)arg1;	// IMP=0x0010000000110314
- (id)copyXPCEncoding;	// IMP=0x001000000011013e
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x001000000010fe46
@property(readonly, nonatomic) NSArray *products;
@property(readonly, nonatomic) NSArray *invalidProductIdentifiers;
- (id)init;	// IMP=0x001000000010fdcc

@end

