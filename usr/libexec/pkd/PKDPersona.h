//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface PKDPersona : NSObject
{
    _Bool _enterprise;	// 8 = 0x8
    NSNumber *_personaID;	// 16 = 0x10
}

+ (_Bool)personasAreSupported;	// IMP=0x0040000000016dda
- (void).cxx_destruct;	// IMP=0x0020000000016f78
@property(readonly, getter=isEnterprise) _Bool enterprise; // @synthesize enterprise=_enterprise;
@property(readonly) NSNumber *personaID; // @synthesize personaID=_personaID;
- (id)description;	// IMP=0x0010000000016eb0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000016e48
- (_Bool)isEqualToPersona:(id)arg1;	// IMP=0x0010000000016df8
- (unsigned long long)hash;	// IMP=0x0010000000016de2
- (id)initWithPersonaID:(id)arg1 enterprise:(_Bool)arg2;	// IMP=0x0010000000016d64

@end

