//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ASCPair : NSObject
{
    id _first;	// 8 = 0x8
    id _second;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000017ae2
@property(readonly, nonatomic) id second; // @synthesize second=_second;
@property(readonly, nonatomic) id first; // @synthesize first=_first;
- (id)description;	// IMP=0x0010000000017a3b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000178a8
- (unsigned long long)hash;	// IMP=0x00100000000177f6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000017727
- (id)initWithFirst:(id)arg1 second:(id)arg2;	// IMP=0x001000000001768e

@end

