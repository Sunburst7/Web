/*
 * @Author: HH
 * @Date: 2023-04-01 23:42:43
 * @LastEditTime: 2023-04-05 00:50:59
 * @LastEditors: HH
 * @Description: class can copy by copy_construct and assignment
 * @FilePath: /WebREST/WebREST/base/copyable.h
 */

#ifndef WebREST_COPYABLE_H_
#define WebREST_COPYABLE_H_

namespace WebREST {

class Copyable {
protected:
    Copyable() = default;
    ~Copyable() = default;
};

} // namespace WebREST

#endif
