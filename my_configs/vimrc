"УСТАНОВКА ПЛАГИНОВ
"Нужно установить Vundle (https://github.com/VundleVim/Vundle.vim)
"В командном режиме :PluginInstall

set nocompatible              " be iMproved, required
filetype off                  " required

"	VUNDLE
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()

Plugin 'VundleVim/Vundle.vim'

Plugin 'tpope/vim-fugitive'
Plugin 'git://git.wincent.com/command-t.git'
Plugin 'rstacruz/sparkup', {'rtp': 'vim/'}

Plugin 'flazz/vim-colorschemes'
Plugin 'tpope/vim-surround'

call vundle#end()            " required
filetype plugin indent on    " required

" НАСТРОЙКА ТАБОВ
set tabstop=3 
set shiftwidth=3
set smarttab
set expandtab "Ставим табы пробелами
set softtabstop=3 "3 пробела в табе
set autoindent " Автоотступ
" Включаем 256 цветов в терминале, мы ведь работаем из иксов?
" Нужно во многих терминалах, например в gnome-terminal
set t_Co=256
 
"ДРУГОЕ
syntax on "Включить подсветку синтаксиса
set nu "Включаем нумерацию строк
set mousehide "Спрятать курсор мыши когда набираем текст
set mouse=a "Включить поддержку мыши
set termencoding=utf-8 "Кодировка терминала
set novisualbell "Не мигать 
"set t_vb= "Не пищать! (Опции 'не портить текст', к сожалению, нету)
" Удобное поведение backspace
"set backspace=indent,eol,start whichwrap+=<,>,[,]
" Вырубаем черточки на табах
"set showtabline=1

" Переносим на другую строчку, разрываем строки
"set wrap
"set linebreak

" Вырубаем .swp и ~ (резервные) файлы
"set nobackup
"set noswapfile

set encoding=utf-8 " Кодировка файлов по умолчанию
set fileencodings=utf8,cp1251

"set clipboard=unnamed
"set ruler

"set hidden
"nnoremap <C-N> :bnext<CR>
"nnoremap <C-P> :bprev<CR>

" Выключаем звук в Vim
"set visualbell t_vb=

colorscheme OceanicNext
