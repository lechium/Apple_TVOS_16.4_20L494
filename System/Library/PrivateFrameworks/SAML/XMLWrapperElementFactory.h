//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface XMLWrapperElementFactory : NSObject
{
}

+ (unsigned long long)elementTypeByTagName:(id)arg1;	// IMP=0x008000000000a583
+ (Class)elementClassByTagName:(id)arg1;	// IMP=0x008000000000a56a
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2;	// IMP=0x008000000000a467
+ (void)initialize;	// IMP=0x008000000000a3d4
+ (id)sharedInstance;	// IMP=0x008000000000a34f
- (Class)classForXMLNode:(struct _xmlNode *)arg1 error:(id *)arg2;	// IMP=0x000000000000a4be

@end

