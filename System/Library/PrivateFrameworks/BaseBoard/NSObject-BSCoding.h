//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (BSCoding)
+ (id)bs_secureObjectFromData:(id)arg1 ofClasses:(id)arg2;	// IMP=0x008000000006b124
+ (id)bs_secureObjectFromData:(id)arg1 ofClass:(Class)arg2;	// IMP=0x008000000006b0c1
+ (id)bs_secureDataFromObject:(id)arg1;	// IMP=0x008000000006b0ac
+ (id)bs_secureDecodedFromData:(id)arg1 withAdditionalClasses:(id)arg2;	// IMP=0x008000000006a959
+ (id)bs_secureDecodedFromData:(id)arg1;	// IMP=0x008000000006a55c
+ (_Bool)bs_isPlistableType;	// IMP=0x0080000000069e4f
+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x008000000007f8b6
- (id)bs_secureEncoded;	// IMP=0x001000000006a0b3
- (_Bool)bs_isPlistableType;	// IMP=0x001000000006a099
- (_Bool)supportsBSXPCSecureCoding;	// IMP=0x001000000007f8be
@end

