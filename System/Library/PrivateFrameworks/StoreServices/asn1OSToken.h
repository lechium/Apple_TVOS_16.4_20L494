//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class asn1Token;

__attribute__((visibility("hidden")))
@interface asn1OSToken
{
    asn1Token *mValue;	// 40 = 0x28
}

@property(readonly) asn1Token *value; // @synthesize value=mValue;
- (id)stringValue;	// IMP=0x00000000000f6551
- (void)dealloc;	// IMP=0x00000000000f650f
- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(_Bool)arg5;	// IMP=0x00000000000f6449

@end

