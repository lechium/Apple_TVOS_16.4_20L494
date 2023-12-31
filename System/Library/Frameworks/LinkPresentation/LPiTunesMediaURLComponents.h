//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaURLComponents : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_storefrontCountryCode;	// 16 = 0x10
}

+ (id)storefrontCountryCodeFromPathComponent:(id)arg1;	// IMP=0x006000000006a034
+ (id)identifierFromQueryItems:(id)arg1 pathComponent:(id)arg2;	// IMP=0x0060000000069dc9
- (void).cxx_destruct;	// IMP=0x000000000006a09c
@property(readonly, copy, nonatomic) NSString *storefrontCountryCode; // @synthesize storefrontCountryCode=_storefrontCountryCode;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000069ba4

@end

