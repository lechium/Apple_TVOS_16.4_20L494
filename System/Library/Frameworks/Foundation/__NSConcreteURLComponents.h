//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSURLComponents.h"

__attribute__((visibility("hidden")))
@interface __NSConcreteURLComponents : NSURLComponents
{
    struct __CFURLComponents *_components;	// 8 = 0x8
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00100000005061ae
- (void)setPercentEncodedQueryItems:(id)arg1;	// IMP=0x0000000000507bbf
- (id)percentEncodedQueryItems;	// IMP=0x0000000000507a10
- (void)setQueryItems:(id)arg1;	// IMP=0x000000000050781b
- (id)queryItems;	// IMP=0x000000000050766c
- (struct _NSRange)rangeOfFragment;	// IMP=0x0000000000507602
- (struct _NSRange)rangeOfQuery;	// IMP=0x0000000000507598
- (struct _NSRange)rangeOfPath;	// IMP=0x000000000050752e
- (struct _NSRange)rangeOfPort;	// IMP=0x00000000005074c4
- (struct _NSRange)rangeOfHost;	// IMP=0x000000000050745a
- (struct _NSRange)rangeOfPassword;	// IMP=0x00000000005073f0
- (struct _NSRange)rangeOfUser;	// IMP=0x0000000000507386
- (struct _NSRange)rangeOfScheme;	// IMP=0x000000000050731c
- (void)setPercentEncodedFragment:(id)arg1;	// IMP=0x000000000050725e
- (id)percentEncodedFragment;	// IMP=0x000000000050720d
- (void)setPercentEncodedQuery:(id)arg1;	// IMP=0x000000000050714f
- (id)percentEncodedQuery;	// IMP=0x00000000005070fe
- (void)setPercentEncodedPath:(id)arg1;	// IMP=0x0000000000507040
- (id)percentEncodedPath;	// IMP=0x0000000000506fef
- (void)setEncodedHost:(id)arg1;	// IMP=0x0000000000506f31
- (id)encodedHost;	// IMP=0x0000000000506ee0
- (void)setPercentEncodedHost:(id)arg1;	// IMP=0x0000000000506e22
- (id)percentEncodedHost;	// IMP=0x0000000000506dd1
- (void)setPercentEncodedPassword:(id)arg1;	// IMP=0x0000000000506d13
- (id)percentEncodedPassword;	// IMP=0x0000000000506cc2
- (void)setPercentEncodedUser:(id)arg1;	// IMP=0x0000000000506c04
- (id)percentEncodedUser;	// IMP=0x0000000000506bb3
- (void)setFragment:(id)arg1;	// IMP=0x0000000000506b69
- (id)fragment;	// IMP=0x0000000000506b18
- (void)setQuery:(id)arg1;	// IMP=0x0000000000506ace
- (id)query;	// IMP=0x0000000000506a7d
- (void)setPath:(id)arg1;	// IMP=0x0000000000506a33
- (id)path;	// IMP=0x00000000005069e2
- (void)setPort:(id)arg1;	// IMP=0x00000000005068a7
- (id)port;	// IMP=0x0000000000506856
- (void)setHost:(id)arg1;	// IMP=0x000000000050680c
- (id)host;	// IMP=0x00000000005067bb
- (void)setPassword:(id)arg1;	// IMP=0x0000000000506771
- (id)password;	// IMP=0x0000000000506720
- (void)setUser:(id)arg1;	// IMP=0x00000000005066d6
- (id)user;	// IMP=0x0000000000506685
- (void)setScheme:(id)arg1;	// IMP=0x00000000005065c7
- (id)scheme;	// IMP=0x0000000000506576
- (id)string;	// IMP=0x0000000000506525
- (id)URLRelativeToURL:(id)arg1;	// IMP=0x00000000005064d1
- (id)URL;	// IMP=0x0000000000506480
- (id)initWithString:(id)arg1;	// IMP=0x0000000000506365
- (id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;	// IMP=0x000000000050623f
- (id)init;	// IMP=0x00000000005061b6
- (id)description;	// IMP=0x000000000050606b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000505fd3
- (void)dealloc;	// IMP=0x0000000000505f5e
- (unsigned long long)hash;	// IMP=0x0000000000505f3d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000505edc

@end

