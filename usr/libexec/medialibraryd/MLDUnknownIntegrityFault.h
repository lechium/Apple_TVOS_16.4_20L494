//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MLDUnknownIntegrityFault
{
    NSString *_faultString;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000013475
@property(readonly, nonatomic) NSString *faultString; // @synthesize faultString=_faultString;
- (_Bool)attemptRecoveryUsingHandle:(struct sqlite3 *)arg1 withError:(id *)arg2;	// IMP=0x001000000001336b
- (id)description;	// IMP=0x00100000000132ef
- (id)initWithFaultString:(id)arg1;	// IMP=0x0010000000013275

@end

