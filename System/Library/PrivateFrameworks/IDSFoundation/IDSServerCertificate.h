//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface IDSServerCertificate : NSObject
{
    NSData *_dataRepresentation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000bfc41
@property(readonly, nonatomic) NSData *dataRepresentation; // @synthesize dataRepresentation=_dataRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bfc2c
- (unsigned long long)hash;	// IMP=0x00000000000bfbe8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bfb3b
- (id)description;	// IMP=0x00000000000bfaa6
- (id)initWithDataRepresentation:(id)arg1;	// IMP=0x00000000000bfa33

@end

