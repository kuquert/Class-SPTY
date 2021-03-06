//
//  Album.h
//  Class-SPTY
//
//  Created by Marcus Vinicius Kuquert on 2/13/15.
//  Copyright (c) 2015 Adriano Soares. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Music.h"

@interface Album : NSObject

@property NSArray *musics;
@property NSString *name;

+ (NSArray *) loadAlbums: (NSDictionary *) obj;
- (Album *) initWithObject:(NSDictionary *) object;




@end
